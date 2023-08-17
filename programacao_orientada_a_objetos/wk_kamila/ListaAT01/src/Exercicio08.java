import javax.swing.JOptionPane;

/*
A prefeitura de uma cidade necessita de um sistema de rodízio de veículos, onde o condutor informa o número final de sua placa e recebe a informação de quais dias não pode trafegar com seu carro, de acordo com a lista a seguir:
 
segunda: finais 0 e 5
terça: finais 1 e 6
quarta: finais 2 e 7
quinta: finais 3 e 8
sexta: 4 e 9

Faça um programa que automatize esse rodízio de veículos, 
a partir da entrada de dados do condutor referente ao final de sua placa.
*/


public class Exercicio08 {
	public static void main(String[] args) {
        int finalPlaca = Integer.parseInt(JOptionPane.showInputDialog("Digite o último dígito da placa do veículo:"));

        String diaNaoPodeTrafegar = "";

        switch (finalPlaca) {
            case 0:
            case 5:
                diaNaoPodeTrafegar = "segunda-feira";
                break;
            case 1:
            case 6:
                diaNaoPodeTrafegar = "terça-feira";
                break;
            case 2:
            case 7:
                diaNaoPodeTrafegar = "quarta-feira";
                break;
            case 3:
            case 8:
                diaNaoPodeTrafegar = "quinta-feira";
                break;
            case 4:
            case 9:
                diaNaoPodeTrafegar = "sexta-feira";
                break;
            default:
                JOptionPane.showMessageDialog(null, "Número de placa inválido!", "Erro", JOptionPane.ERROR_MESSAGE);
                System.exit(0);
        }

        JOptionPane.showMessageDialog(null,"Não pode trafegar às " + diaNaoPodeTrafegar + "-feiras com final de placa " + finalPlaca,
                "Rodízio de Veículos", JOptionPane.INFORMATION_MESSAGE);
    }
}

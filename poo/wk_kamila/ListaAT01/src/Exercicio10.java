import javax.swing.JOptionPane;

/*
Faça um programa que peça os valores de uma matriz 3x3 e ao final,
mostre na tela o total da soma de todos os elementos dessa matriz.
 */
public class Exercicio10 {
	public static void main(String[] args) {
        double[][] matriz = new double[3][3];

        for (int i = 0; i < matriz.length; i++) {
            for (int j = 0; j < matriz[i].length; j++) {
                matriz[i][j] = Double.parseDouble(JOptionPane.showInputDialog("Digite o valor da posição [" + i + "][" + j + "]:"));
            }
        }

        double soma = 0;

        for (int i = 0; i < matriz.length; i++) {
            for (int j = 0; j < matriz[i].length; j++) {
                soma += matriz[i][j];
            }
        }

        String mensagem = "Matriz informada:\n";

        for (int i = 0; i < matriz.length; i++) {
            for (int j = 0; j < matriz[i].length; j++) {
                mensagem += matriz[i][j] + " ";
            }
            mensagem += "\n";
        }

        mensagem += "\nTotal da soma dos elementos da matriz: " + soma;

        JOptionPane.showMessageDialog(null, mensagem, "Soma da Matriz", JOptionPane.INFORMATION_MESSAGE);
    }
}

import javax.swing.JOptionPane;

/*
Faça um programa que pergunte para 20 pessoas o número do candidato 
que elas pretendem votar nessas eleições, considerando a lista:

88 = irineu
95 = Felipe Smith
23 = Jarbas

Mostre na tela quantas pessoas pretendem votar em cada um dos candidatos, 
e qual o candidato favorito (considere que pode existir empate).
 */
public class Exercicio09 {
	public static void main(String[] args) {
        int[] votos = new int[3];
        String[] candidatos = {"Irineu", "Felipe Smith", "Jarbas"};

        for (int i = 0; i < 20; i++) {
            int numeroCandidato = Integer.parseInt(JOptionPane.showInputDialog("Digite o número do candidato (88, 95 ou 23) para a pessoa " + (i + 1) + ":"));

            switch (numeroCandidato) {
                case 88:
                    votos[0]++;
                    break;
                case 95:
                    votos[1]++;
                    break;
                case 23:
                    votos[2]++;
                    break;
                default:
                    JOptionPane.showMessageDialog(null, "Número de candidato inválido!", "Erro", JOptionPane.ERROR_MESSAGE);
                    i--;
                    break;
            }
        }

        int maxVotos = votos[0];
        int candidatoFavorito = 0;
        boolean empate = false;

        for (int i = 1; i < votos.length; i++) {
            if (votos[i] > maxVotos) {
                maxVotos = votos[i];
                candidatoFavorito = i;
                empate = false;
            } else if (votos[i] == maxVotos) {
                empate = true;
            }
        }

        String mensagem = "Resultado da votação:\n";

        for (int i = 0; i < votos.length; i++) {
            mensagem += candidatos[i] + ": " + votos[i] + " votos\n";
        }

        if (empate) {
            mensagem += "Houve empate no candidato favorito.";
        } else {
            mensagem += "Candidato favorito: " + candidatos[candidatoFavorito];
        }

        JOptionPane.showMessageDialog(null, mensagem, "Resultado da Votação", JOptionPane.INFORMATION_MESSAGE);
    }
}

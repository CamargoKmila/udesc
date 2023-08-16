import javax.swing.JOptionPane;

/*
 Faça um programa que alimente um vetor com 10 valores inteiros e também que solicite 
 ao usuário a entrada de dados de um valor inteiro qualquer. 
 A solução deverá fazer uma busca do valor, informado pelo usuário, 
 no vetor e imprimir a posição em que esse número foi encontrado ou se não foi encontrado.
 */

public class Exercicio02 {
	
	public static void main(String[] args) {
        int[] vetor = new int[10];

        for (int i = 0; i < vetor.length; i++) {
            vetor[i] = Integer.parseInt(JOptionPane.showInputDialog("Digite o valor " + (i + 1) + ":"));
        }

        int valorBusca = Integer.parseInt(JOptionPane.showInputDialog("Digite um valor para buscar:"));

        int posicao = -1;
        for (int i = 0; i < vetor.length; i++) {
            if (vetor[i] == valorBusca) {
                posicao = i;
                break;
            }
        }

        if (posicao != -1) {
            JOptionPane.showMessageDialog(null, "O valor " + valorBusca + " foi encontrado na posição " + posicao,
                    "Resultado da Busca", JOptionPane.INFORMATION_MESSAGE);
        } else {
            JOptionPane.showMessageDialog(null, "O valor " + valorBusca + " não foi encontrado no vetor.",
                    "Resultado da Busca", JOptionPane.INFORMATION_MESSAGE);
        }
    }
}

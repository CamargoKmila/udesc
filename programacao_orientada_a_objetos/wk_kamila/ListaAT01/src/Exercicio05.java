import javax.swing.JOptionPane;

/*
Sabe-se que o latão é constituído de 70% de cobre e 30% de zinco. 
Faça um programa que permita ao usuário informar uma quantidade de latão em 
quilos e forneça o total de cobre e zinco necessários para fabricar essa quantidade.
*/
public class Exercicio05 {
	public static void main(String[] args) {
        double quantidadeLatão = Double.parseDouble(JOptionPane.showInputDialog("Digite a quantidade de latão (em quilos):"));

        double quantidadeCobre = quantidadeLatão * 0.7;
        double quantidadeZinco = quantidadeLatão * 0.3;

        String mensagem = String.format("Para %.2f kg de latão:\nQuantidade de cobre: %.2f kg\nQuantidade de zinco: %.2f kg",
                quantidadeLatão, quantidadeCobre, quantidadeZinco);

        JOptionPane.showMessageDialog(null, mensagem, "Cálculo de Materiais para Latão", JOptionPane.INFORMATION_MESSAGE);
    }
}

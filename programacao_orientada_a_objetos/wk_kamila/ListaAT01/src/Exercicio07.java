import javax.swing.JOptionPane;

/*
Faça um programa que peça três números e diga qual o maior entre os três.
*/
public class Exercicio07 {
	public static void main(String[] args) {
        double numero1 = Double.parseDouble(JOptionPane.showInputDialog("Digite o primeiro número:"));
        double numero2 = Double.parseDouble(JOptionPane.showInputDialog("Digite o segundo número:"));
        double numero3 = Double.parseDouble(JOptionPane.showInputDialog("Digite o terceiro número:"));

        double maiorNumero = numero1;

        if (numero2 > maiorNumero) {
            maiorNumero = numero2;
        }
        
        if (numero3 > maiorNumero) {
            maiorNumero = numero3;
        }

        String mensagem = String.format("O maior número é: %.2f", maiorNumero);

        JOptionPane.showMessageDialog(null, mensagem, "Maior Número", JOptionPane.INFORMATION_MESSAGE);
    }
}

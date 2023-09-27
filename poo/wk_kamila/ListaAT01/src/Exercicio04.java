import javax.swing.JOptionPane;

/*
Faça um programa que receba quatro notas do aluno e as insira em um vetor. 
Depois, calcule a média aritmética entre as quatro notas e 
mostre o "conceito" do aluno conforme as instruções: 
• 9.0 ou maior = Conceito A
• entre 8.0 e 8.9 = Conceito B
• entre 7.0 e 7.9 = Conceito C
• menor que 7.0 = Conceito D
*/
public class Exercicio04 {
    public static void main(String[] args) {
        double[] notas = new double[4];

        for (int i = 0; i < notas.length; i++) {
            notas[i] = Double.parseDouble(JOptionPane.showInputDialog("Digite a nota " + (i + 1) + ":"));
        }

        double somaNotas = 0;
        for (double nota : notas) {
            somaNotas += nota;
        }

        double media = somaNotas / notas.length;

        String conceito;
        if (media >= 9.0) {
            conceito = "A";
        } else if (media >= 8.0) {
            conceito = "B";
        } else if (media >= 7.0) {
            conceito = "C";
        } else {
            conceito = "D";
        }

        String mensagem = String.format("Média: %.2f\nConceito: %s", media, conceito);

        JOptionPane.showMessageDialog(null, mensagem, "Conceito do Aluno", JOptionPane.INFORMATION_MESSAGE);
    }
}

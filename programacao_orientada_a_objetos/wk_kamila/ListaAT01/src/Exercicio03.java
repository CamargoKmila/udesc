import javax.swing.JOptionPane;

/*
FUP que receba um valor de temperatura em ºF (Grau Fahrenheit) e 
converta para ºC (Grau Celsius). 
Fórmula do cálculo para essa conversão:temperaturaC = 5 * (temperaturaF – 32) / 9

Como resultado, mostre a seguinte mensagem: Ex.: “XXº F equivalem a YYºC”.
*/

public class Exercicio03 {
    public static void main(String[] args) {
        double temperaturaF = Double.parseDouble(JOptionPane.showInputDialog("Digite a temperatura em Fahrenheit:"));

        double temperaturaC = 5 * (temperaturaF - 32) / 9;

        String mensagem = String.format("%.1fº F equivalem a %.1fºC", temperaturaF, temperaturaC);

        JOptionPane.showMessageDialog(null, mensagem, "Conversão de Temperatura", JOptionPane.INFORMATION_MESSAGE);
    }
}

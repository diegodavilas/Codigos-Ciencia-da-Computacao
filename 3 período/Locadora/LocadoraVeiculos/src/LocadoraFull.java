
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;
import javax.swing.table.DefaultTableModel;
public class Main extends JFrame implements ActionListener{
// Declarando variÃ¡veis de escolo global
JComboBox cbAnoFabricacao, cbMarca;
JButton bConcluir, bSair, bLimpar, bExcluir;
JLabel lTitle,lNomeDoCliente,lNumeroDoCliente , lNomeDoCarro, lbAnoFabricacao,
lMarca, lConcluir, lPlaca;
JTextField tfNomeDoCliente,tfNumeroDoCliente,tfNomeCarro, tfAnoFabricacao,
tfPlaca;
// Criando barra de menu
JMenuBar mbMenu = new JMenuBar();
JMenuItem miLimpar = new JMenuItem("Limpar campos");
// "Puxando" table padrão de tabelas
DefaultTableModel table = new DefaultTableModel();
// Criando a tabela com o table passado por parãmetro
JTable tabela = new JTable(table);
// Criando janela com barra rolagem para o caso de muitas linhas na tabela
JScrollPane spScrollPane = new JScrollPane(tabela);
public Main(){
// Criando frame (janela)
setLayout(new FlowLayout()); // Organiza layout
setSize(1000,500); // Define tamanho do frame
setVisible(true); // Torna o frame visivel
setTitle("LOCACENTER"); // Definindo tÃtulo pra janela
this.getContentPane().setBackground(Color.WHITE); // Definindo cor de fundo
this.setLayout(null); // Deixando sem definiÃ§Ã£o de layout para mais tarde fazer manualmente
setLocationRelativeTo(null); // Definindo a posiÃ§Ã£o da janela no centro da tela
setResizable(false); // Definindo tamanho padrao da janela
Container p = getContentPane();
// Criando os ComboBox do Ano de FabricaÃ§Ã£o dos carros
String[] anos = { "","2010","2011","2012","2013","2014", "2015","", "2016", "2017",
"2018", "2019", "2020", "2021"};
JComboBox<String> cbFab = new JComboBox<>(anos);
cbFab.setMaximumRowCount (6); // Maximo de linhas na lista do popup
// Criando ComboBox das marcas
String[] marcas = { "", "Fiat", "Chevrolet", "Toyota", "Volkswagen", "Hyundai",
"Hyundai", " Honda", "Nissan", "Kia"};
JComboBox<String> cbMarcaa = new JComboBox<>(marcas);
cbMarcaa.setMaximumRowCount (6);
cbMarcaa.setEditable(true);
// Adicionando o menu ao frame
setJMenuBar(mbMenu);
lTitle = new JLabel("\t\t\t LOCAÇÃO DE VEÌCULOS ");
lNomeDoCliente = new JLabel("Nome do Cliente: ");
lNumeroDoCliente = new JLabel("Número do Cliente: ");
lNomeDoCarro = new JLabel("Modelo do Carro: ");
lConcluir = new JLabel("Pronto? ");
lbAnoFabricacao = new JLabel("Ano de Fabricacao: ");
lMarca = new JLabel("Marca: ");
lPlaca = new JLabel("Placa: ");
// Criando BotÃμes
bConcluir = new JButton("Salvar");
bSair = new JButton("Sair");
bLimpar = new JButton("Limpar");
bExcluir = new JButton("Excluir Linha");
// Criando campos de texto
tfNomeDoCliente = new JTextField(40);
tfNumeroDoCliente = new JTextField(40);
tfNomeCarro = new JTextField(40);
tfPlaca = new JTextField(4);
// "Puxando" as ComboBox criadas anteriormente e armazenando em outra variÃ¡vel
cbAnoFabricacao = cbFab;
cbMarca = cbMarcaa;
// Definindo componentes que terão ações "ouvidas" para atribuir funcionalidade a eles
bConcluir.addActionListener(this);
bSair.addActionListener(this);
bLimpar.addActionListener(this);
bExcluir.addActionListener(this);
miLimpar.addActionListener(this);
// Pegando table de tabela e adicionando colunas
table.addColumn("Nome");
table.addColumn("Número");
table.addColumn("Placa");
table.addColumn("Modelo");
table.addColumn("Marca");
table.addColumn("Ano");
// Lendo as dimensÃμes da janela e armazenando nas váriaveis
int largura = getContentPane().getSize().width;
int altura = getContentPane().getSize().height;
// Definindo localizaÃ§Ã£o nos eixos x e y de cada componente e respectivamente largura e altura
lTitle.setBounds(largura - 950, altura - 450, 1000, 25);
lNomeDoCliente.setBounds(largura - 950, altura - 400, 100, 25);
tfNomeDoCliente.setBounds(largura - 950, altura - 370, 280, 25);
lNumeroDoCliente.setBounds(largura - 950, altura - 340, 280, 25);
tfNumeroDoCliente.setBounds(largura - 950, altura - 310, 280, 25);
lNomeDoCarro.setBounds(largura - 950, altura - 280, 100, 25);
tfNomeCarro.setBounds(largura - 950, altura - 250, 280, 25);
lMarca.setBounds(largura - 650, altura - 400, 120, 25);
cbMarca.setBounds(largura - 650, altura - 370, 120, 25);
lPlaca.setBounds(largura - 650, altura - 220, 150, 25);
tfPlaca.setBounds(largura - 650, altura - 190, 120, 25);
lbAnoFabricacao.setBounds(largura - 650, altura - 300, 150, 25);
cbAnoFabricacao.setBounds(largura - 650, altura - 280, 120, 25);
bConcluir.setBounds(largura - 950, altura - 120, 420, 25);
bSair.setBounds(largura - 950, altura - 80, 205, 25);
bLimpar.setBounds(largura - 735, altura - 80, 205, 25);
bExcluir.setBounds(largura - 450, altura - 80, 420, 25);
spScrollPane.setBounds(largura - 450, altura - 400, 420, 300);
// Tornando os componentes visÃveis ao adicionar na janela
p.add(lTitle);
p.add(lNomeDoCliente);
p.add(tfNomeDoCliente);
p.add(lNumeroDoCliente);
p.add(tfNumeroDoCliente);
p.add(lNomeDoCarro);
p.add(tfNomeCarro);
p.add(lPlaca);
p.add(tfPlaca);
p.add(lbAnoFabricacao);
p.add(cbAnoFabricacao);
p.add(lMarca);
p.add(cbMarca);
p.add(lConcluir);
p.add(bConcluir);
p.add(bSair);
p.add(bExcluir);
p.add(bLimpar);
p.add(spScrollPane);
// Usando método revalidate para conferir que os componentes estão em seus lugares
p.revalidate();
}
// MÃ©todo que serÃ¡ chamado posteriormente para apagar todos os campos
public void Clr(){
tfNomeDoCliente.setText("");
tfNumeroDoCliente.setText("");
tfNomeCarro.setText(""); // Para limpar a caixa de texto
tfPlaca.setText("");
cbMarca.setSelectedIndex(0); // Para limpar a combo_box
cbAnoFabricacao.setSelectedIndex(0);
}
// Classe principal
public static void main(String[] args){
Main s = new Main();
s.setDefaultCloseOperation(EXIT_ON_CLOSE);
}
// Sobreescrevendo mÃ©todos personalizando os actions listeners
@Override
public void actionPerformed(ActionEvent ae) {
// Se botÃ£o Sair for apertado irÃ¡ fechar a janela
if(ae.getSource()==bSair){
System.exit(0);
}
// Se botÃ£o Limpar for apertado irÃ¡ chamar o mÃ©todo Clr() e limparÃ¡ todos os campos
if (ae.getSource() == bLimpar) {
Clr();
}
// Se botÃ£o Concluir for apertado irÃ¡ verificar se hÃ¡ campos vazios e irÃ¡ adicionar informaÃ§Ãμes na tabela
if(ae.getSource()==bConcluir){
if(tfNomeCarro.getText().length() > 0 && cbMarca.getSelectedItem() != "" &&
cbAnoFabricacao.getSelectedItem() != "" && tfPlaca.getText().length() > 0){
String nomec = tfNomeDoCliente.getText();
String num = tfNumeroDoCliente.getText();
String placa = tfPlaca.getText();
String nome = tfNomeCarro.getText();
String marca = (String) cbMarca.getSelectedItem();
String ano = (String) cbAnoFabricacao.getSelectedItem();
Clr();
// Adicionando linha na tabela
table.addRow(new Object[]{nomec,num,placa, nome, marca, ano});
}else{
JOptionPane.showMessageDialog(null, "Preencha todos os campos",
"AtenÃ§Ã£o", JOptionPane.INFORMATION_MESSAGE);
}
}
// Se botÃ£o Delet for apertado irÃ¡ apagar a linha selecionada
if (ae.getSource()==bExcluir){
int a = JOptionPane.showConfirmDialog(null, "Deseja excluir o registro desse carro?", "", JOptionPane.YES_NO_OPTION);
if(a==0){
if (tabela.getSelectedRow() >= 0){
table.removeRow(tabela.getSelectedRow());
tabela.setModel(table);
}else{
JOptionPane.showMessageDialog(null, "VocÃª esqueceu de selecionar uma linha");
}
}
}
}
}

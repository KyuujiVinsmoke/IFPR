package ifpr.pgua.eic.listatelefonica.controllers;

import java.net.URL;
import java.util.ResourceBundle;

import ifpr.pgua.eic.listatelefonica.models.ListaTelefonica;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Alert;
import javafx.scene.control.TextField;
import javafx.scene.control.Alert.AlertType;

public class JanelaCadastro implements Initializable 
{
    @FXML
    private TextField tfNome;

    @FXML
    private TextField tfTelefone;

    @FXML
    private TextField tfEmail;

    private ListaTelefonica listaTelefonica;

    public JanelaCadastro(ListaTelefonica listaTelefonica)
    {
        this.listaTelefonica = listaTelefonica;
    }

    @Override
    public void initialize(URL arg0, ResourceBundle arg1) 
    {
        
    }

    @FXML
    private void cadastrar(ActionEvent evento)
    {
        String nome = tfNome.getText();
        String email = tfEmail.getText();
        String telefone = tfTelefone.getText();
        
        if(!email.contains("@"))
        {
            tfEmail.getStyleClass().add("erro-textfield");
            Alert alert = new Alert(AlertType.WARNING, "Email Invalido!");
            alert.showAndWait();
            return;
        }

        String msg = "Cadastro realizado!";
        if(!listaTelefonica.adicionarContato(nome, telefone, email))
        {
            msg = "Cadastro não realizado!";
        }
        
        else
        {
            limpa();
        }

        Alert alert = new Alert(AlertType.INFORMATION,msg);
        alert.showAndWait();
    }

    @FXML
    private void limpar(ActionEvent evento)
    {
        limpa();
    }

    private void limpa()
    {
        tfNome.clear();
        tfEmail.clear();
        tfTelefone.clear();
    }
}
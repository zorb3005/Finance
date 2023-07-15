module com.example.hate {
    requires javafx.controls;
    requires javafx.fxml;
            
                            
    opens com.example.hate to javafx.fxml;
    exports com.example.hate;
}
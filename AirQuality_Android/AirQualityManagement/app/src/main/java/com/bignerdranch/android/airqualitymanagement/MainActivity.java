package com.bignerdranch.android.airqualitymanagement;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

public class MainActivity extends AppCompatActivity {

    private Button connect_button,show_button;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        connect_button= (Button) findViewById(R.id.connect);
        connect_button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent I=new Intent(MainActivity.this,ShowDataActivity.class);
                startActivity(I);
            }
        });
        show_button= (Button) findViewById(R.id.show);
        show_button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent I=new Intent(MainActivity.this,DatabaseGraphActivity.class);
                startActivity(I);
            }
        });
    }
}

package com.example.androidgameproject;

import androidx.appcompat.app.AppCompatActivity;

import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.os.Bundle;

import java.io.InputStream;

public class MainActivity extends AppCompatActivity {

    // Used to load the 'native-lib' library on application startup.
   /* static {
        System.loadLibrary("native-lib");
    }
*/
   // private native void setAssetManager(AssetManager mgr);

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        //setContentView(R.layout.activity_main);

        GLView view = new GLView(getApplication());
        // Example of a call to a native method
       // TextView tv = findViewById(R.id.sample_text);
        setContentView(view);
        //tv.setText("hey");
    }


}

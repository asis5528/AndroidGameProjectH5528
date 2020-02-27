package com.example.androidgameproject;

public class JniLib {

    static {
        System.loadLibrary("native-lib");
    }
    public static native String stringFromJNI();

}

//
// Created by sergio on 2/13/2020.
//

#ifndef NATIVE_ACTIVITY_RENDERER_H
#define NATIVE_ACTIVITY_RENDERER_H


#include <GLES3/gl3.h>
//#include "shader_manager.h"

class Renderer {
    public:
        void init();
        void render();

    private:
       unsigned int VAO;
        int shaderProgram;


};


#endif //NATIVE_ACTIVITY_RENDERER_H

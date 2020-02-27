#version 300 es
precision mediump float;
layout (location = 0) in vec3 aPos;
out vec3 uv;
void main()
{
   gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);
  uv = vec3(aPos);}


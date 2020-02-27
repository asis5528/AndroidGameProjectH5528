
#version 300 es
precision mediump float;
out vec4 FragColor;
in vec3 uv;



float circle (vec2 uv,vec2 pos,float r, float blur)
{
    float d = length(uv-pos);
    float c  = smoothstep(r , r-blur,d);

    return c;
}
void main()
{
    vec2 st = uv.xy;
    st.x*=2.;
    float d = (circle (st,vec2 (.0,.0),0.3,0.02))- ( circle (st,vec2 (.09,.09),0.04,0.01));
    float e = (d-(circle (st,vec2 (-.09,.09),0.04,0.01)));

    float f = (circle (st+vec2(0.0,0.2),vec2 (.0,.0),0.13,0.02)) - ( circle (st+vec2(0.0,0.2),vec2 (.0,-.02),0.13,0.01));
    f = clamp(f,0.,1.);
    float g = ((d-(circle (st,vec2 (-.09,.09),0.04,0.01)))-f);




    FragColor = (vec4(vec2(g),0.,1.0))*vec4(1.,1.,0.,1.);
}


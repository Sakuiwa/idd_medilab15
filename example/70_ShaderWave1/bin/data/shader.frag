uniform vec2 u_resolution; // 画面の解像度(width,height)
uniform float u_time;      // 起動してからの経過時間(秒)　OF側から指定する

void main() {
    //float red = sin(u_time);
    
    //画面の解像度から、0.0～1.0に正規化する
    vec2 st = gl_FragCoord.xy / u_resolution;
    // 画面の中央をy軸の中心に
    st.y =st.y - 0.5;
    // Sin波で濃淡をつける
    st.y += sin(st.x * 2.0 * float(i)+ u_time) * 0.2;
    st.y =1.0-pow(abs(st.y),0.2)/10.0;
    color +=vec4(st.y*0.1,st.y,st.y,1.0);
    // 濃度の絶対値
    //vec3 color = vec3(abs(st.y));
    gl_FragColor =color;
}


float* getTHD(float* freq, float I){
    float* normalize = (float*) malloc(nharmonics*sizeof(float));
    for(int i = 0; i < 10; i++){
        Serial.println(i);
        normalize[i] = 0;
        Serial.print(" freq: ");
        Serial.print(freq[i]);
        Serial.print(" -   normalize: ");
        normalize[i] = ( (1.0/(i+1.0)) * I * (freq[i]/freq[0]) );
        Serial.println(normalize[i], 6);
    }
    return normalize;
}
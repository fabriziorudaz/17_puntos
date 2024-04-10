int main(){
      float eval1, eval2, eval3;
      float notaProm;
      float notaTpf;

      scanf("%f %f %f %f %f", &eval1, &eval2 ,&eval3, &notaProm, &notaTpf);
    
        float calEval = (eval1 + eval2 + eval3)/3;
        float notaFinal = calEval * 0.55 + notaProm * 0.30 + notaTpf * 0.15;

        printf("la nota final del alumno en el año fue %.2f", notaFinal );    
    return 0;
}

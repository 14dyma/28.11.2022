# включити  < iostream >

struct  Date {
  int години;
  int хвилин;
};

використання  простору імен  std ;
int  main (){
  дата дата;
  int AddMinutes;

  Знову:
  cout << " Введіть роки: " ;
  cin >> дата. години ;
  cout << " Введіть хвилини: " ;
  cin >> дата. хвилини ;
  cout << " Введіть час у хвилинах, які потрібно додати: " ;
  cin >> Додати хвилини;

  якщо (дата. години >= 24 || дата. хвилини > 60 ){
    cout << " ---------------------------------------------- - \n " ;
    cout << " Введіть коректну дату \n " ;
    goto Знову;
  }
  
    дата. хвилини += дата. годин * 60 +AddMinutes;
    дата. години = дата. хвилин / 60 ;
    дата. хвилини -= дата. годин * 60 ;

  while (дата. години >= 24 ){
    дата. годин -= 24 ;
  }
  

  якщо (дата. години < 10 && дата. хвилини > 10 ){
    cout << " 0 " << дата. години << " : " << дата. хвилини ;
  } else  if (дата. годин > 10 && дата. хвилин < 10 ){
    cout << дата. години << " : " << " 0 " << дата. хвилини ;
  } else  if (дата. години < 10 && дата. хвилини < 10 ){
  cout << " 0 " << дата. години << " : " << " 0 " << дата. хвилини ;
  } ще {
    cout << дата. години << " : " << дата. хвилини ;
  }
  cout << endl;
  goto Знову;
}

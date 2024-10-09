#include <iostream>
using namespace std;

//O maior entre 4 inteiros

int main () {
    //Ler 4 numeros inteiros
    int a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    //Identificar o maior numero digitado
    //Identificar se existem numeros iguais

    if (a == b && a == c && a == d) {
            cout << "Maior: " << a << endl;
        } else {
            if (a == b && a == c) {
                if (a > d) {
                    cout << "Maior: " << a << endl;
                } else {
                    cout << "Maior: " << d << endl;
                }
            } else {
                if (a == c && a == d) {
                    if (a > b) {
                        cout << "Maior: " << a << endl;
                    } else {
                        cout << "Maior: " << b << endl;
                    }
                } else {
                    if (a == b && a == d) {
                        if (a > c) {
                            cout << "Maior: " << a << endl;
                        } else {
                            cout << "Maior: " << c << endl;
                        }
                    } else {
                        if (a == b) {
                            if (a > c && a > d) {
                                cout << "Maior: " << a << endl;
                            } else {
                                if (a > c && c > d) {
                                    cout << "Maior: " << a << endl; 
                                } else {
                                    if (c > a){
                                        cout << "Maior: " << c << endl;
                                    } else {
                                        cout << "Maior: " << d << endl;
                                }
                            }
                        }
                    } else {
                        if (a == c) {
                            if (a > b && a > d){
                                cout << "Maior: " << a << endl;
                            } else {
                                if (a > b && b > d) {
                                    cout << "Maior: " << a << endl;
                                } else {
                                    if (b > d) {
                                        cout << "Maior: " << b << endl;
                                    } else {
                                        cout << "Maior: " << d << endl;
                                    }
                                }
                            }
                        } else {
                            if (a == d){
                                if (a > b && a > c) {
                                    cout << "Maior: " << a << endl;
                                } else {
                                    if (a > b) {
                                        cout << "Maior: " << c << endl;
                                    } else {
                                        if (b > c) {
                                            cout << "Maior: " << b << endl;
                                        } else {
                                            cout << "Maior: " << c << endl;
                                        }
                                    }
                                }
                            } else {
                                if (b == c){
                                    if (b > a && b > d) {
                                        cout << "Maior: " << b << endl;
                                    } else {
                                        if (b > a) {
                                            cout << "Maior: " << d << endl;
                                        } else {
                                            if (a > d) {
                                                cout << "Maior: " << a << endl;
                                            } else {
                                                cout << "Maior: " << d << endl;
                                            }
                                        }
                                    }
                                } else {
                                    if (b == d) {
                                        if (b > a && b > c) {
                                            cout << "Maior: " << b << endl;
                                        } else {
                                            if (b > a) {
                                                cout << "Maior: " << c << endl;
                                            } else {
                                                if (a > c) {
                                                    cout << "Maior: " << a << endl;
                                                } else {
                                                    cout << "Maior: " << c << endl;
                                                }
                                            }
                                        }
                                    } else {
                                        if (c == d) {
                                            if (c > a && c > b) {
                                                cout << "Maior: " << c << endl;
                                            } else {
                                                if (c > a) {
                                                    cout << "Maior: " << b << endl;
                                                } else {
                                                    if (a > b) {
                                                        cout << "Maior: " << a << endl;
                                                    } else {
                                                        cout << "Maior: " << b << endl;
                                                    }
                                                }
                                            }
                                        } else {
                                            if (a > b && a > c && a > d) {
                                                cout << "Maior: " << a << endl;
                                            } else {
                                                if (b > a && b > c && b > d) {
                                                    cout << "Maior: " << b << endl;
                                                } else {
                                                    if (c > a && c > b && c > d) {
                                                        cout << "Maior: " << c << endl;
                                                    } else {
                                                        if (d > a && d > b && d > c) {
                                                            cout << "Maior: " << d << endl;
                                                        }
                                                    }
                                                }
                                            }

                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    

    return 0;
}
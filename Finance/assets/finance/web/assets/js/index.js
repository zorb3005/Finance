// назначение переменных
let userName = 'Danil Boberkov';
let moneyCashh = '23,340';
let currency = '$';
let currencySpent = currency + 301;
let currencyReceived = 700;

// искомые элементы в разметке страницы
let currencySpentElement = document.getElementById("currency-spent");
let currencyElement = document.getElementById("currency");
let moneyCashhElement = document.getElementById("money_cash");
let userNameElement = document.getElementById("user_name");

// запихивыаем значение переменной в HTML элемент
currencySpentElement.innerHTML = currencySpent;
currencyElement.innerHTML = currency;
userNameElement.innerHTML = userName;
moneyCashhElement.innerHTML = moneyCashh;
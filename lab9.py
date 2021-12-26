def input_to_list():
    symbols = []
    empty_line = True
    while empty_line:
        input_string = input("Enter your string \n")
        if input_string is not None:
            empty_line = False
    for i in input_string:
        symbols.append(i)
    return symbols


def display_the_number_of_symbols(symbols):
    new_symbol_list = []
    for each_symbol in symbols:
        if each_symbol not in new_symbol_list:
            new_symbol_list.append(each_symbol)
    for each_final_symbol in new_symbol_list:
        print("Symbol ", each_final_symbol, "found ", symbols.count(each_final_symbol), " times")
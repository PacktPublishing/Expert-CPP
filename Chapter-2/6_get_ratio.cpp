auto get_ratio(bool minimum) {
    if (minimum) {
        return 12;    
    }
    return 18;
}

auto main() {
    get_ratio(true);    
    return 0;
}

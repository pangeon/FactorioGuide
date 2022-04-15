#include "creatures_read_data.hpp"

void show_biters() {
    small_biter().print_info_about_biter();
    medium_biter().print_info_about_biter();
    big_biter().print_info_about_biter();
    behemoth_biter().print_info_about_biter();
}
void show_spitters() {
    small_spitter().print_info_about_spitter_or_worm(true);
    medium_spitter().print_info_about_spitter_or_worm(true);
    big_spitter().print_info_about_spitter_or_worm(true);
    behemoth_spitter().print_info_about_spitter_or_worm(true);
}
void show_worms() {
    small_spitter().print_info_about_spitter_or_worm(false);
    medium_spitter().print_info_about_spitter_or_worm(false);
    big_spitter().print_info_about_spitter_or_worm(false);
    behemoth_spitter().print_info_about_spitter_or_worm(false);
}
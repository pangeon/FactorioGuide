#include "creatures_data.hpp"

// BITERS
Biter small_biter() {
    Creature small_biter_properties;
    small_biter_properties.set_name("Small Biter");
    small_biter_properties.set_desc("\n\tWeakest of biters, can be easily killed with a pistol.");
    small_biter_properties.set_health(15);
    small_biter_properties.set_range(1);

    Biter small_biter;
    small_biter.set_base_properties(small_biter_properties);
    small_biter.set_damage(7);
    small_biter.set_attack_speed(1.71);
    small_biter.set_speed(42.3);
    small_biter.set_polllution_to_join_atack(4);

    return small_biter;
}
Biter medium_biter() {
    Creature medium_biter_properties; 
    medium_biter_properties.set_name("Medium Biter");
    medium_biter_properties.set_desc("\n\tStronger and slightly faster than the small biter. \n\tCan pose a problem for and even kill weaker players.");
    medium_biter_properties.set_health(15*5);
    medium_biter_properties.set_range(1);

    Biter medium_biter;
    medium_biter.set_base_properties(medium_biter_properties);
    medium_biter.set_damage(7+8);
    medium_biter.set_attack_speed(1.71);
    medium_biter.set_speed(51.8);
    medium_biter.set_polllution_to_join_atack(4*5);

    return medium_biter;
}
Biter big_biter() {
    Creature big_biter_properties; 
    big_biter_properties.set_name("Big Biter");
    big_biter_properties.set_desc("\n\tDangerous, resistant to small arms. Can attack through walls, \n\thitting objects directly behind them.");
    big_biter_properties.set_health(15*5*5);
    big_biter_properties.set_range(1*2);

    Biter big_biter;
    big_biter.set_base_properties(big_biter_properties);
    big_biter.set_damage((7+8)*2);
    big_biter.set_attack_speed(1.71);
    big_biter.set_speed(49.7);
    big_biter.set_polllution_to_join_atack(4*5*4);

    return big_biter;
}
Biter behemoth_biter() {
    Creature behemoth_biter_properties; 
    behemoth_biter_properties.set_name("Behemoth Biter");
    behemoth_biter_properties.set_desc("\n\tExtremely durable and nearly immune to small arms, except for the strongest ordnance. \n\tCan attack through walls, hitting objects directly behind them.");
    behemoth_biter_properties.set_health(15*5*5*10);
    behemoth_biter_properties.set_range(1*2);

    Biter behemoth_biter;
    behemoth_biter.set_base_properties(behemoth_biter_properties);
    behemoth_biter.set_damage(((7+8)*2)*3);
    behemoth_biter.set_attack_speed(1.2);
    behemoth_biter.set_speed(64.8);
    behemoth_biter.set_polllution_to_join_atack(4*5*4*5);

    return behemoth_biter;
}

// SPLITTERS
Splitter small_splitter() 
{
    Creature small_splitter_properties;
    small_splitter_properties.set_name("Small Spitter");
    small_splitter_properties.set_desc("\n\tWeakest of spitters. Easy to kill with any weapon, but attacks at range.");
    small_splitter_properties.set_health(10);
    small_splitter_properties.set_range(13);

    Splitter small_splitter;
    small_splitter.set_base_properties(small_splitter_properties);
    small_splitter.set_speed(40);

    small_splitter.add_acid_projectile_info(
        0.6, // Attack speed
        1, // Area of effect size
        12 // Damage (on contact):
    );
    small_splitter.add_acid_puddle_info(
        32, // Lifetime
        7.2, // Damage
        // Applies effect (on contact):
            60, // Movement/vehicle speed modifier
            2 // Duration
    );
    return small_splitter;
}
Splitter medium_splitter() 
{
    Creature medium_splitter_properties;
    medium_splitter_properties.set_name("Medium Spitter");
    medium_splitter_properties.set_desc("\n\tStronger and slower than the smaller version. Can pose a problem for and even kill weaker players.");
    medium_splitter_properties.set_health(10*5);
    medium_splitter_properties.set_range(13+1);

    Splitter medium_splitter;
    medium_splitter.set_base_properties(medium_splitter_properties);
    medium_splitter.set_speed(35.6);

    medium_splitter.add_acid_projectile_info(
        0.6, // Attack speed
        1.25, // Area of effect size
        12*2 // Damage (on contact):
    );
    medium_splitter.add_acid_puddle_info(
        32, // Lifetime
        7.2*4, // Damage
        // Applies effect (on contact):
            50, // Movement/vehicle speed modifier
            2 // Duration
    );
    return medium_splitter;
}
Splitter big_splitter() 
{
    Creature big_splitter_properties;
    big_splitter_properties.set_name("Big Spitter");
    big_splitter_properties.set_desc("\n\tAn even bulkier spitter and so can take more damage.");
    big_splitter_properties.set_health(10*5*4);
    big_splitter_properties.set_range(13+1+1);

    Splitter big_splitter;
    big_splitter.set_base_properties(big_splitter_properties);
    big_splitter.set_speed(32.4);

    big_splitter.add_acid_projectile_info(
        0.6, // Attack speed
        1.35, // Area of effect size
        12*3 // Damage (on contact):
    );
    big_splitter.add_acid_puddle_info(
        32, // Lifetime
        130, // Damage
        // Applies effect (on contact):
            40, // Movement/vehicle speed modifier
            2 // Duration
    );
    return big_splitter;
}
Splitter behemoth_splitter() 
{
    Creature behemoth_splitter_properties;
    behemoth_splitter_properties.set_name("Behemoth Spitter");
    behemoth_splitter_properties.set_desc("\n\tThe bulkiest of the spitters and so can take even more damage.");
    behemoth_splitter_properties.set_health(10*5*4*7.5);
    behemoth_splitter_properties.set_range(13+1+1+1);

    Splitter behemoth_splitter;
    behemoth_splitter.set_base_properties(behemoth_splitter_properties);
    behemoth_splitter.set_speed(32.4);

    behemoth_splitter.add_acid_projectile_info(
        0.6, // Attack speed
        1.75, // Area of effect size
        12*5 // Damage (on contact):
    );
    behemoth_splitter.add_acid_puddle_info(
        32, // Lifetime
        360, // Damage
        // Applies effect (on contact):
            30, // Movement/vehicle speed modifier
            2 // Duration
    );
    return behemoth_splitter;
}
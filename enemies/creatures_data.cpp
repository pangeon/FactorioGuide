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

// spitterS
SpitterOrWorm small_spitter() 
{
    Creature small_spitter_properties;
    small_spitter_properties.set_name("Small Spitter");
    small_spitter_properties.set_desc("\n\tWeakest of spitters. Easy to kill with any weapon, but attacks at range.");
    small_spitter_properties.set_health(10);
    small_spitter_properties.set_range(13);

    SpitterOrWorm small_spitter;
    small_spitter.set_base_properties(small_spitter_properties);
    small_spitter.set_speed(40);

    small_spitter.add_acid_projectile_info(
        0.6, // Attack speed
        1, // Area of effect size
        12 // Damage (on contact):
    );
    small_spitter.add_acid_puddle_info(
        32, // Lifetime
        7.2, // Damage
        // Applies effect (on contact):
            60, // Movement/vehicle speed modifier
            2 // Duration
    );
    return small_spitter;
}
SpitterOrWorm medium_spitter() 
{
    Creature medium_spitter_properties;
    medium_spitter_properties.set_name("Medium Spitter");
    medium_spitter_properties.set_desc("\n\tStronger and slower than the smaller version. Can pose a problem for and even kill weaker players.");
    medium_spitter_properties.set_health(10*5);
    medium_spitter_properties.set_range(13+1);

    SpitterOrWorm medium_spitter;
    medium_spitter.set_base_properties(medium_spitter_properties);
    medium_spitter.set_speed(35.6);

    medium_spitter.add_acid_projectile_info(
        0.6, // Attack speed
        1.25, // Area of effect size
        12*2 // Damage (on contact):
    );
    medium_spitter.add_acid_puddle_info(
        32, // Lifetime
        7.2*4, // Damage
        // Applies effect (on contact):
            50, // Movement/vehicle speed modifier
            2 // Duration
    );
    return medium_spitter;
}
SpitterOrWorm big_spitter() 
{
    Creature big_spitter_properties;
    big_spitter_properties.set_name("Big Spitter");
    big_spitter_properties.set_desc("\n\tAn even bulkier spitter and so can take more damage.");
    big_spitter_properties.set_health(10*5*4);
    big_spitter_properties.set_range(13+1+1);

    SpitterOrWorm big_spitter;
    big_spitter.set_base_properties(big_spitter_properties);
    big_spitter.set_speed(32.4);

    big_spitter.add_acid_projectile_info(
        0.6, // Attack speed
        1.35, // Area of effect size
        12*3 // Damage (on contact):
    );
    big_spitter.add_acid_puddle_info(
        32, // Lifetime
        130, // Damage
        // Applies effect (on contact):
            40, // Movement/vehicle speed modifier
            2 // Duration
    );
    return big_spitter;
}
SpitterOrWorm behemoth_spitter() 
{
    Creature behemoth_spitter_properties;
    behemoth_spitter_properties.set_name("Behemoth Spitter");
    behemoth_spitter_properties.set_desc("\n\tThe bulkiest of the spitters and so can take even more damage.");
    behemoth_spitter_properties.set_health(10*5*4*7.5);
    behemoth_spitter_properties.set_range(13+1+1+1);

    SpitterOrWorm behemoth_spitter;
    behemoth_spitter.set_base_properties(behemoth_spitter_properties);
    behemoth_spitter.set_speed(32.4);

    behemoth_spitter.add_acid_projectile_info(
        0.6, // Attack speed
        1.75, // Area of effect size
        12*5 // Damage (on contact):
    );
    behemoth_spitter.add_acid_puddle_info(
        32, // Lifetime
        360, // Damage
        // Applies effect (on contact):
            30, // Movement/vehicle speed modifier
            2 // Duration
    );
    return behemoth_spitter;
}
// WORMS
SpitterOrWorm small_worm() 
{
    Creature small_worm_properties;
    small_worm_properties.set_name("Small Worm");
    small_worm_properties.set_desc("\n\tA weak worm. It is still capable of killing the player unless it is targeted as priority.");
    small_worm_properties.set_health(200);
    small_worm_properties.set_range(25);

    SpitterOrWorm small_worm;
    small_worm.set_base_properties(small_worm_properties);

    small_worm.add_acid_projectile_info(
        0.66, // Attack speed
        1.4, // Area of effect size
        36 // Damage (on contact):
    );
    small_worm.add_acid_puddle_info(
        32, // Lifetime
        21.6, // Damage
        // Applies effect (on contact):
            60, // Movement/vehicle speed modifier
            2 // Duration
    );
    return small_worm;
}
SpitterOrWorm medium_worm() 
{
    Creature medium_worm_properties;
    medium_worm_properties.set_name("Medium Worm");
    medium_worm_properties.set_desc("\n\tMedium worms are dangerous to even more advanced players. They should be handled with care.");
    medium_worm_properties.set_health(200*2);
    medium_worm_properties.set_range(25+5);

    SpitterOrWorm medium_worm;
    medium_worm.set_base_properties(medium_worm_properties);

    medium_worm.add_acid_projectile_info(
        0.66, // Attack speed
        1.55, // Area of effect size
        36+12 // Damage (on contact):
    );
    medium_worm.add_acid_puddle_info(
        32, // Lifetime
        57.6, // Damage
        // Applies effect (on contact):
            50, // Movement/vehicle speed modifier
            2 // Duration
    );
    return medium_worm;
}
SpitterOrWorm big_worm() 
{
    Creature big_worm_properties;
    big_worm_properties.set_name("Big Worm");
    big_worm_properties.set_desc("\n\tBig worms are not as much more dangerous as resilient. They are almost immune to common gunfire of any sort.");
    big_worm_properties.set_health(200*2+350);
    big_worm_properties.set_range(25+5+8);

    SpitterOrWorm big_worm;
    big_worm.set_base_properties(big_worm_properties);

    big_worm.add_acid_projectile_info(
        0.66, // Attack speed
        1.75, // Area of effect size
        36+12+24 // Damage (on contact):
    );
    big_worm.add_acid_puddle_info(
        32, // Lifetime
        259, // Damage
        // Applies effect (on contact):
            40, // Movement/vehicle speed modifier
            2 // Duration
    );
    return big_worm;
}
SpitterOrWorm behemoth_worm() 
{
    Creature behemoth_worm_properties;
    behemoth_worm_properties.set_name("Behemoth Worm");
    behemoth_worm_properties.set_desc("\n\tBehemoth worms are the most dangerous of worms. They are just as resilient as Big worms, with much greater range.");
    behemoth_worm_properties.set_health(200*2+350);
    behemoth_worm_properties.set_range(25+5+8+10);

    SpitterOrWorm behemoth_worm;
    behemoth_worm.set_base_properties(behemoth_worm_properties);

    behemoth_worm.add_acid_projectile_info(
        0.66, // Attack speed
        2, // Area of effect size
        36+12+24+24 // Damage (on contact):
    );
    behemoth_worm.add_acid_puddle_info(
        32, // Lifetime
        691, // Damage
        // Applies effect (on contact):
            30, // Movement/vehicle speed modifier
            2 // Duration
    );
    return behemoth_worm;
}
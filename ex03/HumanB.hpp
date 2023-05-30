#ifndef HUMANB_HPP
# define HUMANB_HPP

class HumanB
{
    public:
       
        void attack(void);
        void setWeapon(Weapon weapon);
        
    private:

        HumanB(void);

        std::string name;
        Weapon      weapon;

}
#endif
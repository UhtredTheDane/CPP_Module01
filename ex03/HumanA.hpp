#ifndef HUMANA_HPP
# define HUMANA_HPP

class HumanA
{
    public:
       
        void attack(void);
        void setWeapon(Weapon weapon);
        
    private:
    
        HumanA(void);

        std::string name;
        Weapon weapon;
}
#endif
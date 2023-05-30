#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon
{
    public:
        
        Weapon(std:string type);

        std::string getType(void);
        void        setTypes(std::string type);

    private:

        Weapon(void);
        
        std::string type;

}
#endif
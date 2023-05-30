#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon
{
    public:
        std::string getType(void);
        void        setTypes(std::string type);

    private:
        std::string type;

}
#endif
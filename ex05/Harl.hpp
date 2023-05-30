#ifndef HARL_HPP
# define HARL_HPP

#include <iosteam>

class Harl
{
    public:

        Harl(void);

        void    complain(std::string level);

    private:

        void (Harl::* what_complain) (void);

        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
}
#endif
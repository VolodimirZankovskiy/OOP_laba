
#include "Diagnosis.h"

Diagnosis::Diagnosis(std::string dia, std::string nameofp, std::string surnameofp, int ageofp, std::string nameofd,
                     std::string surnameofd, int expofd, std::string termos)
                     :doctor(nameofd,surnameofd,expofd),
                     patient(nameofp,surnameofp,ageofp), diagnos{dia}, term{termos}{}
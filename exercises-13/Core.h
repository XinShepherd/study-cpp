//
// Created by Fuxin on 2020/4/3.
//

#ifndef STUDY_CPP_CORE_H
#define STUDY_CPP_CORE_H

#include <iostream>
#include <string>
#include <vector>


class Core {
public:
    Core() : midterm(0), final(0) {}

    Core(std::istream &in) {
        read(in);
    }

    std::string name() const { return n; }

    virtual std::istream &read(std::istream &);

    virtual double grade() const;

protected:
    double midterm;
    double final;
    std::vector<double> homework;

    std::istream &read_common(std::istream &);

private:
    std::string n;
};

class Grad : Core {
public:
    Grad() : thesis(0) {}

    Grad(std::istream &is) {
        read(is);
    }

    double grade() const override;

    std::istream &read(std::istream &) override;

private:
    double thesis;
};

bool compare(const Core &, const Core &);

std::istream &read_hw(std::istream &, std::vector<double> &);

#endif //STUDY_CPP_CORE_H

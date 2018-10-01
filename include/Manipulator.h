#ifndef MANIPULATOR_H
#define MANIPULATOR_H


class Manipulator
{
    public:
        Manipulator();
        virtual ~Manipulator();

        virtual void DownClick() = 0;
        virtual void Drag() = 0;
        virtual void  UpClick() = 0;

    protected:

    private:
};

#endif // MANIPULATOR_H

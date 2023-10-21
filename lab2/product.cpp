#include<product.h>

void product::write(std::ostream&out) const
{
    data.write(out);
    out << " " << name << " " << amount << endl;
}
product product::from_stream(std::istream& in)
{
   product result;
   result.data = Date::from_stream(in);
   in>> result.name;
   in >> result.amount;

   return result;
}

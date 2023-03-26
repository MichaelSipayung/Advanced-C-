#include "sales.hpp"
struct Sales_data
{
    std::string bookNo;
    unsigned unit_sold=0;
    double revenue;
};
void work_with_sales(){
    Sales_data data_1, data_2;
    double price=0;
    std::cout<<"read the transaction : ";
    std::cin>>data_1.bookNo >>data_1.unit_sold >>price;
    data_1.revenue =data_1.unit_sold*price;
    std::cout<<"sales 1 total reveneu : Rp. "<< data_1.revenue<<std::endl;
    std::cout<<"reading the next sales data : " ;
    std::cin>>data_2.bookNo>> data_2.unit_sold>>price;
    data_2.revenue  =data_2.unit_sold*price;
    std::cout<<"sales 2 total reveneu : Rp. "<< data_2.revenue<<std::endl;
    if (data_1.bookNo==data_2.bookNo)
    {
        unsigned totalCnt  = data_1.unit_sold+data_2.unit_sold;
        double totalRevenue= data_1.revenue + data_2.revenue;
        std::cout<<data_1.bookNo<<" "<< totalCnt<<" " << totalRevenue<<" ";
        if (totalCnt!=0)
        {
            std::cout<<totalRevenue/totalCnt<<std::endl;
        }
        else{
            std::cout<<"(no sales)" <<std::endl;
        }
    }
    else{
        std::cerr<<"data must refer to the same isbn number"<<std::endl;
    }    
}
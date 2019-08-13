/* Copyright (c) 2019 minwoo.gil All rights reserved. */

#ifndef SHOPPING_H_
#define SHOPPING_H_

#include <vector>
#include "./goods.h"

// ShoppingCart class presents List of shopping.
// Example:
//     ShoppingCart tobuylist;
//     Goods obj1;
//     Goods obj2;
//     ...
//     tobuylist.PushList(obj1);
//     tobuylist.PushList(obj2);
//     tobuylist.PrintList();
class ShoppingCart{
 public:
  void PushList(const Goods& object);
  Goods& GetLastElement() const;
  void PrintList() const;
  void SortByPrice();
  void SortByIndex();

 private:
  std::vector<Goods> shopping_list_;
};

#endif  // SHOPPING_H_

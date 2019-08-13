/* Copyright (c) 2019 minwoo.gil All rights reserved. */

#include "./goods.h"

// Set member variable of goods with given index and price values
void Goods::SetGoodsInfo(int index, int price) {
  goods_index_ = index;
  goods_price_ = price;
}

// Return index information
int Goods::GetIndex() const {
  return goods_index_;
}

// Return price informaiton
int Goods::GetPrice() const {
  return goods_price_;
}

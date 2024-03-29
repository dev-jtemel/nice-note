/*
 * MIT License
 *
 * Copyright (c) 2024 dev.jtemel@gmail.com
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef NN__DS__DIVIDER_NODE_HPP
#define NN__DS__DIVIDER_NODE_HPP

#include <iostream>
#include <string>

#include "nn/ds/node/BaseNode.hpp"

namespace nn {
namespace ds {
namespace node {

/**
 * @brief Represents a horizontal line.
 *
 * Example:
 *  <hr />
 */
struct DividerNode : public BaseNode {
  DividerNode() : BaseNode("hr") {}

  std::ostream& toHTML(std::ostream& stream) override {
    return stream << "<" << token << " />" << std::endl;
  }

  std::ostream& dump(std::ostream& stream) override{
    return stream << "{ DividerNode }" << std::endl;
  }
};

}  // namespace node
}  // namespace ds
}  // namespace nn

#endif  // NN__DS__DIVIDER_NODE_HPP
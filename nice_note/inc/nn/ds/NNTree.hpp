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

#ifndef NN__DS__NNTREE_HPP
#define NN__DS__NNTREE_HPP

#include <iostream>
#include <memory>

#include "nn/ds/node/BaseNode.hpp"

namespace nn {
namespace ds {

/**
 * @brief Stores a AST that is constructed from the given NiceNoteText source
 * file.
 */
class NNTree {
 public:
  NNTree() = default;
  ~NNTree() = default;

  /**
   * @brief Append a node to the end of the NNTree.
   * @param node The node to append.
   */
  void insertNode(std::shared_ptr<node::BaseNode>& node);

  /**
   * @brief Pop and return the current head of the NNTree. This progresses the
   * head of the NNTree by one node.
   * @return std::shared_ptr<node::BaseNode> The current head.
   */
  std::shared_ptr<node::BaseNode> popNode();


  void dump() const;

 private:
  std::shared_ptr<node::BaseNode> m_head{nullptr};
  std::shared_ptr<node::BaseNode> m_current{nullptr};
};

}  // namespace ds
}  // namespace nn

#endif  // NN__DS__NNTREE_HPP
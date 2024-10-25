﻿/****************************************************************************
THIS FILE IS PART OF Fantasy Engine PROJECT
THIS PROGRAM IS FREE SOFTWARE, IS LICENSED UNDER MIT

Copyright (c) 2024 ChenYiZh
https://space.bilibili.com/9308172

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
****************************************************************************/
//using System.Collections;
//using System.Collections.Generic;
//using UnityEngine;
namespace FantasyEngine.Common
{
    //    public class TweenMoveGrid : UITweenGrid
    //    {
    //        public float DeltaPosition;

    //        private Dictionary<Transform, Vector2> _theItems;

    //        protected override void Initialize()
    //        {
    //            base.Initialize();
    //            DeltaPosition = 300;
    //            if (Grid != null)
    //            {
    //                DeltaPosition = Grid.cellWidth / 2.0f;
    //            }
    //            if (_theItems == null)
    //            {
    //                _theItems = new Dictionary<Transform, Vector2>();
    //            }
    //        }

    //        protected override void OnReplay()
    //        {
    //            if (IsPlaying())
    //            {
    //                OnEnd();
    //            }
    //            base.OnReplay();
    //            _theItems.Clear();
    //            foreach (UITweenGrid.TweenItem item in _items)
    //            {
    //                _theItems.Add(item.Item, item.Item.localPosition);
    //                UIWidget widget = item.Item.gameObject.GetComponent<UIWidget>();
    //                if (widget == null)
    //                {
    //                    widget = item.Item.gameObject.AddComponent<UIWidget>();
    //                    bool active = item.Item.gameObject.activeSelf;
    //                    item.Item.gameObject.SetActive(false);
    //                    item.Item.gameObject.SetActive(active);
    //                }
    //                widget.alpha = 0;
    //            }
    //        }

    //        protected override void UpdateItem(Transform item, float rate)
    //        {
    //            if (!_theItems.ContainsKey(item)) return;
    //            UIWidget widget = item.gameObject.GetComponent<UIWidget>();
    //            widget.alpha = rate;
    //            item.localPosition = _theItems[item] + Vector2.right * DeltaPosition * (1 - rate);
    //        }

    //        protected override void OnEnd()
    //        {
    //            base.OnEnd();
    //            _theItems.Clear();
    //        }
    //    }
}
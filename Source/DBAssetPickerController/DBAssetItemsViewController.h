//
//  DBAssetItemsViewController.h
//  DBAttachmentPickerController
//
//  Created by Denis Bogatyrev on 14.03.16.
//
//  The MIT License (MIT)
//  Copyright (c) 2016 Denis Bogatyrev.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"),
//  to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
//  and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
//  IN THE SOFTWARE.
//

#import <UIKit/UIKit.h>

@class DBAssetItemsViewController, PHAsset;
@protocol DBAssetItemsViewControllerDelegate <NSObject>

NS_ASSUME_NONNULL_BEGIN
@optional
- (void)DBAssetItemsViewController:(DBAssetItemsViewController *)controller didFinishPickingAssetArray:(NSArray<PHAsset *> *)assetArray;
- (BOOL)DBAssetImageViewControllerAllowsMultipleSelection:(DBAssetItemsViewController *)controller;
NS_ASSUME_NONNULL_END

@end

@interface DBAssetItemsViewController : UICollectionViewController

@property (weak, nonatomic, nullable) id<DBAssetItemsViewControllerDelegate> assetItemsDelegate;
@property (strong, nonatomic, nonnull) PHAssetCollection *assetCollection;
@property (assign, nonatomic) PHAssetMediaType assetMediaType;
@property (strong, nonatomic, nonnull) NSArray *selectedItens;
@property (nonatomic, retain, nonnull) NSNumber *maxItems;
@property (nonatomic, retain, nullable) NSPredicate *customPredicate;
@property (assign, nonatomic) NSTimeInterval capturedMaximumDuration;   // default is 0

@end

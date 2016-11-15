//
//  TapImageView.h
//  TestLayerImage
//
//  Created by lcc on 14-8-1.
//  Copyright (c) 2014年 lcc. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol TapImageViewDelegate <NSObject>

- (void)tappedWithObject:(id) sender;

- (void)changeSelect:(id) sender;

@end

@interface TapImageView : UIImageView

@property (nonatomic, strong) id identifier;

@property (weak) id<TapImageViewDelegate> t_delegate;

@property (nonatomic, assign) BOOL isInDelete;

@property (nonatomic, assign) BOOL isSelected;


-(void)refreshSelf:(BOOL)isSelect;
@end

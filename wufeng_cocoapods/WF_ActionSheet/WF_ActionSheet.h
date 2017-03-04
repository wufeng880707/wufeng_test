//
//  WF_ActionSheet.h
//  wufeng_cocoapods
//
//  Created by tomodel on 2017/3/4.
//  Copyright © 2017年 tomodel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface M_SheetItem : NSObject
@property(nonatomic, strong) NSString *title;       //标题
@property(nonatomic, strong) UIColor *textColor;    //字体颜色 default is blackColor;
@property(nonatomic, strong) UIFont *textFont;      //字号 default is 15;
@property(nonatomic) CGFloat height;                //行高 default is 44;
@property(nonatomic) BOOL isTitle;                  //标题无法点击 default is NO;

- (instancetype)initWithTitle:(NSString *)title;
@end

@protocol WF_ActionSheetDelegate;

@interface WF_ActionSheet : UIView<UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, strong) NSArray<NSArray *> *dataSource;   //数据源, 外层数组为组数,内层数组为每组行数 ex:@[@[@"xx",@"zz", ...],@[@"yy",...],...]
@property(nonatomic,weak) id<WF_ActionSheetDelegate> delegate;  //调用方,需要实现协议方法

- (instancetype)initWithDelegate:(id<WF_ActionSheetDelegate>)delegate;
- (void)show;
- (void)cancel;

@end

@protocol WF_ActionSheetDelegate <NSObject>

- (void)WF_actionSheet:(WF_ActionSheet *)WF_actionSheet clickedItem:(M_SheetItem *)item atIndex:(NSIndexPath *)indexPath;   //item点击事件

//- (void)WF_actionSheetCancel:(WF_ActionSheet *)WF_actionSheet;    //暂时用不到退出时的代理方法
@end

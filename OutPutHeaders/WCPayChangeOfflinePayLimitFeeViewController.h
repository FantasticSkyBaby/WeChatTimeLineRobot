/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "WCPayBaseViewController.h"

@class UILabel, WCBaseTextFieldItem, UIButton;
@protocol WCPayChangeOfflinePayLimitFeeViewControllerDelegate;

@interface WCPayChangeOfflinePayLimitFeeViewController : WCPayBaseViewController {
	UIButton* m_footerButton;
	WCBaseTextFieldItem* m_textFieldLimitItem;
	UILabel* oLeftLimitLabel;
	id<WCPayChangeOfflinePayLimitFeeViewControllerDelegate> m_delegate;
}
-(void).cxx_destruct;
-(void)OnSliderValueChanged:(id)changed;
-(void)setDelegate:(id)delegate;
-(void)onNext;
-(void)viewDidLoad;
-(void)reloadTableView;
-(void)initNavigationBar;
-(id)getChangeOfflinePayLimitView;
-(void)viewWillLayoutSubviews;
-(void)dealloc;
-(id)init;
@end


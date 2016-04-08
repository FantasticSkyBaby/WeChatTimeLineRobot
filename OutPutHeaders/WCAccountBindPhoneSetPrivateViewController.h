/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "WCAccountBaseViewController.h"

@class NSString, UIButton;
@protocol WCAccountBindPhoneSetPrivateViewControllerDelegate;

@interface WCAccountBindPhoneSetPrivateViewController : WCAccountBaseViewController {
	BOOL m_bAgreementMobileCanBeFound;
	BOOL m_bAgreementPushFriendToMe;
	NSString* m_nsHeaderWording;
	id<WCAccountBindPhoneSetPrivateViewControllerDelegate> m_delegate;
	UIButton* m_pushFriendToMeBtn;
	UIButton* m_mobileCanBeFoundBtn;
}
-(void).cxx_destruct;
-(void)setDelegate:(id)delegate;
-(void)viewDidLoad;
-(void)initTableView;
-(void)onPushFriendToMeAgreementClick;
-(void)onMobileCanBeFoundAgreementClick;
-(void)setPushFriendToMe:(BOOL)me;
-(void)setAgreeMobileCanBeFound:(BOOL)found;
-(void)initNavigationBar;
-(void)onNext;
@end

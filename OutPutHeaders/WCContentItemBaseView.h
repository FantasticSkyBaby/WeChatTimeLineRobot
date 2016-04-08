/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "WCForceTouchTriggerLongPressProtocol.h"
#import "MMUIView.h"

@class WCDataItem, UINavigationController, ShareDataToOpenSDKController, NSString;

@interface WCContentItemBaseView : MMUIView <WCForceTouchTriggerLongPressProtocol> {
	UINavigationController* _navigationController;
	WCDataItem* _oDataItem;
	int _touchCount;
	BOOL _bShowDetail;
	BOOL _bIsLongPressHandled;
	BOOL _bTouchEnds;
	BOOL _bFromDetail;
	BOOL _bSnsScene;
	unsigned _contentItemScene;
	ShareDataToOpenSDKController* _shareDataToOpenSDKController;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) ShareDataToOpenSDKController* shareDataToOpenSDKController;
@property(assign, nonatomic) unsigned contentItemScene;
@property(assign, nonatomic) BOOL bSnsScene;
@property(assign, nonatomic) BOOL bShowDetail;
@property(retain, nonatomic) WCDataItem* oDataItem;
@property(assign, nonatomic) __weak UINavigationController* navigationController;
+(CGSize)getImageSize:(id)size;
+(float)heightForMedia:(id)media showDetail:(BOOL)detail;
+(float)heightForMedia:(id)media;
-(void).cxx_destruct;
-(void)onMenuControllerWillHide:(id)onMenuController;
-(BOOL)isMyShareEmotionFeed;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(BOOL)canShareToOpenSDK;
-(void)shareToOpenSDK;
-(void)addFavorite;
-(void)triggerLongPressFor3DTouchAtLocation:(CGPoint)location inCoordinateView:(id)coordinateView;
-(void)LongPressEvents;
-(void)onMore:(id)more;
-(void)onLongTouch;
-(void)throwUrlMessage;
-(void)setFromDetail;
-(void)setNonInteractive;
-(void)setNormalColor;
-(void)setHighlightedColor;
-(BOOL)canBecomeFirstResponder;
-(void)dealloc;
-(void)initViewsWithWCDataItem:(id)wcdataItem;
-(id)initWithWCDataItem:(id)wcdataItem showDetail:(BOOL)detail snsScene:(BOOL)scene;
-(id)initWithWCDataItem:(id)wcdataItem showDetail:(BOOL)detail withScene:(unsigned)scene;
-(id)initWithWCDataItem:(id)wcdataItem showDetail:(BOOL)detail;
-(id)initWithWCDataItem:(id)wcdataItem;
@end

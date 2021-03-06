/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"
#import "MMImagePickerManagerDelegate.h"
#import "WCActionSheetDelegate.h"

@class UIViewController, NSString;
@protocol TakeOrSelectHeadImageLogicDelegate;

@interface TakeOrSelectHeadImageLogic : MMObject <WCActionSheetDelegate, MMImagePickerManagerDelegate> {
	UIViewController* m_viewController;
	id<TakeOrSelectHeadImageLogicDelegate> m_delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)dealloc;
-(id)initWithViewController:(id)viewController delegate:(id)delegate;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)showGetHeadImage;
-(void)MMImagePickerManagerDidCancel:(id)mmimagePickerManager;
-(void)MMImagePickerManager:(id)manager didFinishPickingImageWithInfo:(id)info;
-(void)showImagePikcer:(int)pikcer;
-(id)getNavigationController;
-(id)getViewController;
@end


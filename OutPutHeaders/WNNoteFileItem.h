/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WNNoteFavItemBase.h"

@class NSString;

@interface WNNoteFileItem : WNNoteFavItemBase {
	NSString* _title;
	NSString* _content;
	NSString* _iconPath;
	NSString* _dataPath;
}
@property(retain, nonatomic) NSString* dataPath;
@property(retain, nonatomic) NSString* iconPath;
@property(retain, nonatomic) NSString* content;
@property(retain, nonatomic) NSString* title;
-(void).cxx_destruct;
-(unsigned long)getPreviewType;
-(id)getFileImgByPreviewType:(unsigned long)type;
-(void)initIcon;
-(id)init;
@end

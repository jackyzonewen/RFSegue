/*!
    RFSegueDelegate
    RFSegue

    Copyright (c) 2012-2014 BB9z
    https://github.com/RFUI/RFSegue

    The MIT License (MIT)
    http://www.opensource.org/licenses/mit-license.php
 */

@class RFSegue;

#pragma mark -
@protocol RFSegueSourceDelegate <NSObject>
@optional
- (BOOL)RFSegueShouldPerform:(RFSegue *)segue;
- (void)RFSegueWillPerform:(RFSegue *)segue;
- (void)RFSegueDidPerform:(RFSegue *)segue;

@end

#pragma mark -
@protocol RFSegueDestinationDelegate <NSObject>
@optional
// Called after sourceViewController recive `RFSegueWillPerform:`.
- (void)RFSegueWillAppear:(RFSegue *)segue;

// Called after sourceViewController recive `RFSegueDidPerform:`.
- (void)RFSegueDidAppear:(RFSegue *)segue;
@end

#pragma mark -
@protocol RFSegueReturnDelegate <NSObject>
@optional
- (BOOL)RFSegueShouldReturn:(id)sender;
- (void)RFSegueWillReturn:(id)sender;
- (void)RFSegueDidReturn:(id)sender;

@end


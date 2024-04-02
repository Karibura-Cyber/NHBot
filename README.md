## NHBot Library

#### Current version `0.1.2`
<hr>

### Basic controlling

#### wait_OK();
Waiting for press OK and run next functions

#### sserial(data);
Use for print data in serial with more function
```
sserial("A1: %d", analog(1));
```

#### NHSetup();
Use for enable motor controlling * this function must be in void setup() *
```
NHSetup();
```

#### sleep(duration);
Like delay();
```
sleep(1000);
```
doing in 1 second

#### analog(pin);
Use for get analog data from pin
```
analog(16);
```
get analog data from GPIO 16

#### digital(pin);
Use for get digital data from pin
```
digital(16);
```
get digital data from GPIO 16

### Motor Controlling

#### motor(speedA, speedB);
Use for control motor by seperate motors speed by speed can be set on -255 to 255
```
motor(255, 255); sleep(1000);
```
forward by full speed in 1 second
``` 
motor(-255, -255); sleep(1000);
```
backward by full speed in 1 second

#### fd(speed);
Forward both motors with same speed
```
fd(255); sleep(1000);
```

#### bk(speed);
Backward both motors with same speed
```
bk(255); sleep(1000);
```

#### fd2(speedA, speedB);
Forward by seperate motor speed
```
fd2(255, 100); sleep(1000);
```
motorA forward with speed 255 and motorB forward with speed 100 in 1 second

#### bk(speed);
Backward both motors with same speed
```
bk2(255, 100); sleep(1000);
``` 
motorA backward with speed 255 and motorB backward with speed 100 in 1 second`

#### sl(speed);
Spin left
```
sl(255); sleep(1000);
```
spin left with speed 255 in 1 second

#### sr(speed);
Spin right
```
sr(255); sleep(1000);
```
spin right with speed 255 in 1 second

#### tl(speed);
Turn left
```
tl(255); sleep(1000);
```
Turn left with speed 255 in 1 second

#### tr(speed);
Turn right
```
tr(255); sleep(1000);
```
Turn right with speed 255 in 1 second

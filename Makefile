MCU=atmega328p

CC = avr-gcc
CFLAGS = -c -Os
LDFLAGS =

TARGET = main

SRCDIR = src
OBJDIR = obj
BINDIR = bin

SRC = $(wildcard $(SRCDIR)/*.c)
OBJ = $(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRC))

all: hex

hex: $(BINDIR)/$(TARGET).hex

$(BINDIR)/$(TARGET).hex: $(BINDIR)/$(TARGET).elf
	avr-objcopy -O ihex -j .data -j .text $< $@

$(BINDIR)/$(TARGET).elf: $(OBJ) | $(BINDIR)
	$(CC) $(LDFLAGS) -mmcu=$(MCU) $^ -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -mmcu=$(MCU) $< -o $@

$(OBJDIR):
	mkdir $@

$(BINDIR):
	mkdir $@

clean:
	rm -rf $(OBJDIR)/*
	rm -rf $(BINDIR)/*

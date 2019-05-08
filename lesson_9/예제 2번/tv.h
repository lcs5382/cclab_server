#pragma once

class Tv; //사전선언

class Remote {
private:
	int mode;
public:
	enum { MIN_VOLUME, MAX_VOLUME = 20 };
	enum { ANTENNA, CABLE };
	enum { TV, DVD };

	Remote(int m = TV): mode(m) {}

	bool volume_up(Tv &tv);
	bool volume_down(Tv &tv);
	void onoff(Tv &tv);
	void channel_up(Tv &tv);
	void channel_down(Tv &tv);
	void set_channel(Tv &tv, int c);
	void toggle_mode(Tv &tv);
	void toggle_input(Tv &tv);
};

class Tv {
private:
	bool on;
	int volume;
	int max_channel;
	int channel;
	int mode;
	int input;

public:
	friend void Remote::set_channel(Tv &tv, int channel);
	enum { MIN_VOLUME, MAX_VOLUME = 20 };	
	enum { ANTENNA, CABLE };				
	enum { TV, DVD };						

	Tv(bool on = false, int max_channel = 125)
		: on(on), volume(0), max_channel(max_channel),
		channel(1), mode(CABLE), input(TV) {}

	void onoff() { on = !on; }
	bool is_on() const { return on; }
	bool volume_up();
	bool volume_down();
	void channel_up();
	void channel_down();
	void toggle_mode() { mode ^= 1; } // ^ == XOR연산
	void toggle_input() { input ^= 1; }
	void settings() const;
};

inline bool Remote::volume_up(Tv &tv) { return tv.volume_up(); }
inline bool Remote::volume_down(Tv &tv) { return tv.volume_down(); }
inline void Remote::onoff(Tv & tv) { tv.onoff(); }
inline void Remote::channel_up(Tv &tv) { tv.channel_up(); }
inline void Remote::channel_down(Tv &tv) { tv.channel_down(); }
inline void Remote::toggle_mode(Tv &tv) { tv.toggle_mode(); }
inline void Remote::toggle_input(Tv &tv) { tv.toggle_input(); }
inline void Remote::set_channel(Tv &tv, int channel) { tv.channel = channel; }